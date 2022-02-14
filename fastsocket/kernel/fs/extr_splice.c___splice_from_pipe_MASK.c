
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_desc {int num_spliced; } ;
struct pipe_inode_info {int dummy; } ;
typedef int ssize_t ;
typedef int splice_actor ;


 int FUNC_0 (struct splice_desc*) ;
 int FUNC_1 (struct pipe_inode_info*,struct splice_desc*) ;
 int FUNC_2 (struct pipe_inode_info*,struct splice_desc*,int *) ;
 int FUNC_3 (struct pipe_inode_info*,struct splice_desc*) ;

ssize_t FUNC_4(struct pipe_inode_info *VAR_0, struct splice_desc *VAR_1,
      splice_actor *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1);
 do {
  VAR_3 = FUNC_3(VAR_0, VAR_1);
  if (VAR_3 > 0)
   VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 } while (VAR_3 > 0);
 FUNC_1(VAR_0, VAR_1);

 return VAR_1->num_spliced ? VAR_1->num_spliced : VAR_3;
}
