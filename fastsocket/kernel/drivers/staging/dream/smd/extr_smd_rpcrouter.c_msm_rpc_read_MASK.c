
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rr_fragment {scalar_t__ next; int length; int data; } ;
struct msm_rpc_endpoint {int dummy; } ;


 int FUNC_0 (struct msm_rpc_endpoint*,struct rr_fragment**,unsigned int,long) ;
 int FUNC_1 (struct rr_fragment*) ;
 int FUNC_2 (char*,int ,int ) ;
 char* FUNC_3 (int) ;

int FUNC_4(struct msm_rpc_endpoint *VAR_0, void **VAR_1,
   unsigned VAR_2, long VAR_3)
{
 struct rr_fragment *VAR_4, *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, &VAR_4, VAR_2, VAR_3);
 if (VAR_7 <= 0)
  return VAR_7;




 if (VAR_4->next == 0) {
  *VAR_1 = (void*) VAR_4;
  return VAR_7;
 }




 VAR_6 = FUNC_3(VAR_7);
 *VAR_1 = VAR_6;

 while (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_6, VAR_4->data, VAR_4->length);
  VAR_5 = VAR_4->next;
  VAR_6 += VAR_4->length;
  FUNC_1(VAR_4);
  VAR_4 = VAR_5;
 }

 return VAR_7;
}
