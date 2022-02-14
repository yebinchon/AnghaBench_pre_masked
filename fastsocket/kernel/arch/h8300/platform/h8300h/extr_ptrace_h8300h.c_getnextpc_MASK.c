
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct optable {unsigned char bitmask; unsigned char bitpattern; size_t length; int type; } ;
struct TYPE_2__ {int size; struct optable* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct task_struct*,int ) ;

 int FUNC_1 (struct task_struct*,unsigned char) ;


 TYPE_1__* VAR_3 ;





__attribute__((used)) static unsigned short *FUNC_2(struct task_struct *VAR_4, unsigned short *VAR_5)
{
 const struct optable *VAR_6;
 unsigned char *VAR_7;
 unsigned char VAR_8;
 unsigned long VAR_9;
 unsigned long *VAR_10;
 int VAR_11,VAR_12;
 VAR_6 = VAR_3[0].ptr;
 VAR_11 = VAR_3[0].size;
 VAR_7 = (unsigned char *)VAR_5;
 VAR_8 = *VAR_7++;
 do {
  if ((VAR_8 & VAR_6->bitmask) == VAR_6->bitpattern) {
   if (VAR_6->length < 0) {
    VAR_6 = VAR_3[-VAR_6->length].ptr;
    VAR_11 = VAR_3[-VAR_6->length].size + 1;
    VAR_8 = *VAR_7++;
   } else {
    switch (VAR_6->type) {
    case 132:
     return VAR_5 + VAR_6->length;
    case 133:
     VAR_9 = *(unsigned long *)VAR_5;
     return (unsigned short *)(VAR_9 & 0x00ffffff);
    case 134:
     VAR_9 = *VAR_5 & 0xff;
     return (unsigned short *)(*(unsigned long *)VAR_9);
    case 128:
     VAR_10 = (unsigned long *)FUNC_0(VAR_4, VAR_2);







     return (unsigned short *)(*(VAR_10+2) & 0x00ffffff);
    case 131:
     VAR_12 = (*VAR_5 >> 4) & 0x07;
     if (VAR_12 == 0)
      VAR_9 = FUNC_0(VAR_4, VAR_0);
     else
      VAR_9 = FUNC_0(VAR_4, VAR_12-1+VAR_1);
     return (unsigned short *)VAR_9;
    case 130:
     if (VAR_8 == 0x55 || FUNC_1(VAR_4,VAR_8 & 0x0f))
      VAR_5 = (unsigned short *)((unsigned long)VAR_5 +
               ((signed char)(*VAR_7)));
     return VAR_5+1;
    case 129:
     if (VAR_8 == 0x5c || FUNC_1(VAR_4,(*VAR_7 & 0xf0) >> 4))
      VAR_5 = (unsigned short *)((unsigned long)VAR_5 +
               ((signed short)(*(VAR_5+1))));
     return VAR_5+2;
    }
   }
  } else
   VAR_6++;
 } while(--VAR_11 > 0);
 return ((void*)0);
}
