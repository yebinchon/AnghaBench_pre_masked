
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {void* end; } ;
struct TYPE_12__ {void* left; TYPE_4__* next; } ;
struct TYPE_11__ {TYPE_5__* cp; void* right; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__ u2; TYPE_1__ u1; } ;
struct TYPE_13__ {void* startinst; TYPE_4__* firstinst; } ;
typedef TYPE_3__ Reprog ;
typedef TYPE_4__ Reinst ;
typedef TYPE_5__ Reclass ;



 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;




 TYPE_4__* VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static Reprog*
FUNC_1(Reprog *VAR_3)
{
 Reinst *VAR_4, *VAR_5;
 int VAR_6;
 Reprog *VAR_7;
 Reclass *VAR_8;
 int VAR_9;




 for(VAR_4=VAR_3->firstinst; VAR_4->type!=VAR_0; VAR_4++){
  VAR_5 = VAR_4->u2.next;
  while(VAR_5->type == VAR_1)
   VAR_5 = VAR_5->u2.next;
  VAR_4->u2.next = VAR_5;
 }






 VAR_6 = sizeof(Reprog) + (VAR_2 - VAR_3->firstinst)*sizeof(Reinst);
 VAR_7 = FUNC_0(VAR_3, VAR_6);
 if(VAR_7==0 || VAR_7==VAR_3)
  return VAR_3;
 VAR_9 = (char *)VAR_7 - (char *)VAR_3;
 VAR_2 = (Reinst *)((char *)VAR_2 + VAR_9);
 for(VAR_4=VAR_7->firstinst; VAR_4<VAR_2; VAR_4++){
  switch(VAR_4->type){
  case 131:
  case 128:
  case 130:
  case 129:
   VAR_4->u1.right = (void*)((char*)VAR_4->u1.right + VAR_9);
   break;
  case 133:
  case 132:
   VAR_4->u1.right = (void*)((char*)VAR_4->u1.right + VAR_9);
   VAR_8 = VAR_4->u1.cp;
   VAR_8->end = (void*)((char*)VAR_8->end + VAR_9);
   break;
  }
  VAR_4->u2.left = (void*)((char*)VAR_4->u2.left + VAR_9);
 }
 VAR_7->startinst = (void*)((char*)VAR_7->startinst + VAR_9);
 return VAR_7;
}
