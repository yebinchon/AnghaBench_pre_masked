
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct capincci {scalar_t__ ncci; struct capincci* next; } ;
struct capidev {struct capincci* nccis; } ;



__attribute__((used)) static struct capincci *FUNC_0(struct capidev *VAR_0, u32 VAR_1)
{
 struct capincci *VAR_2;

 for (VAR_2=VAR_0->nccis; VAR_2 ; VAR_2 = VAR_2->next) {
  if (VAR_2->ncci == VAR_1)
   break;
 }
 return VAR_2;
}
