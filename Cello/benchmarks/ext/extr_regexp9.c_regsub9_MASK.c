
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* ep; } ;
struct TYPE_5__ {char* sp; } ;
struct TYPE_7__ {TYPE_2__ e; TYPE_1__ s; } ;
typedef TYPE_3__ Resub ;



extern void
FUNC_0(char *VAR_0,
 char *VAR_1,
 int VAR_2,
 Resub *VAR_3,
 int VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = VAR_1+VAR_2-1;
 while(*VAR_0 != '\0'){
  if(*VAR_0 == '\\'){
   switch(*++VAR_0){
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
   case '8':
   case '9':
    VAR_7 = *VAR_0-'0';
    if(VAR_3[VAR_7].s.sp != 0 && VAR_3!=0 && VAR_4>VAR_7)
     for(VAR_5 = VAR_3[VAR_7].s.sp;
          VAR_5 < VAR_3[VAR_7].e.ep;
          VAR_5++)
      if(VAR_1 < VAR_6)
       *VAR_1++ = *VAR_5;
    break;
   case '\\':
    if(VAR_1 < VAR_6)
     *VAR_1++ = '\\';
    break;
   case '\0':
    VAR_0--;
    break;
   default:
    if(VAR_1 < VAR_6)
     *VAR_1++ = *VAR_0;
    break;
   }
  }else if(*VAR_0 == '&'){
   if(VAR_3[0].s.sp != 0 && VAR_3!=0 && VAR_4>0)
   if(VAR_3[0].s.sp != 0)
    for(VAR_5 = VAR_3[0].s.sp;
         VAR_5 < VAR_3[0].e.ep; VAR_5++)
     if(VAR_1 < VAR_6)
      *VAR_1++ = *VAR_5;
  }else{
   if(VAR_1 < VAR_6)
    *VAR_1++ = *VAR_0;
  }
  VAR_0++;
 }
 *VAR_1 = '\0';
}
