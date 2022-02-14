
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subch_data_s {int sd_subch; int sd_nasid; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct subch_data_s*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct subch_data_s*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct subch_data_s *VAR_3 = (struct subch_data_s *) VAR_2->private_data;
 int VAR_4;


 FUNC_0(VAR_0, VAR_3);


 VAR_4 = FUNC_1(VAR_3->sd_nasid, VAR_3->sd_subch);

 FUNC_2(VAR_3);
 return VAR_4;
}
