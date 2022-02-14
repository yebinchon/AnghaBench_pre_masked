
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {int dummy; } ;
struct TCP_Server_Info {unsigned int nr_iov; struct kvec* iov; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvec*) ;
 struct kvec* FUNC_1 (int,int ) ;

__attribute__((used)) static struct kvec *
FUNC_2(struct TCP_Server_Info *VAR_1, unsigned int VAR_2)
{
 struct kvec *VAR_3;

 if (VAR_1->iov && VAR_2 <= VAR_1->nr_iov)
  return VAR_1->iov;


 VAR_3 = FUNC_1(sizeof(*VAR_3) * VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_1->iov);
  VAR_1->iov = VAR_3;
  VAR_1->nr_iov = VAR_2;
 }
 return VAR_3;
}
