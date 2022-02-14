
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ncci_datahandle_queue {scalar_t__ datahandle; int len; struct ncci_datahandle_queue* next; } ;
struct capidrv_ncci {struct ncci_datahandle_queue* ackqueue; } ;


 int FUNC_0 (struct ncci_datahandle_queue*) ;

__attribute__((used)) static int FUNC_1(struct capidrv_ncci *VAR_0, u16 VAR_1)
{
 struct ncci_datahandle_queue **VAR_2, *VAR_3;
 int VAR_4;

 for (VAR_2 = &VAR_0->ackqueue; *VAR_2; VAR_2 = &(*VAR_2)->next) {
   if ((*VAR_2)->datahandle == VAR_1) {
   VAR_3 = *VAR_2;
   VAR_4 = VAR_3->len;
   *VAR_2 = (*VAR_2)->next;
          FUNC_0(VAR_3);
   return VAR_4;
  }
 }
 return -1;
}
