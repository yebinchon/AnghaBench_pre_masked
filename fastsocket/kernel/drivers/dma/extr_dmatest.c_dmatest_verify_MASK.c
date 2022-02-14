
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct TYPE_2__ {int comm; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_1 (char*,int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(u8 **VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned int VAR_5, u8 VAR_6,
  bool VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9 = 0;
 u8 VAR_10;
 u8 VAR_11;
 u8 *VAR_12;
 unsigned int VAR_13 = VAR_5;

 for (; (VAR_12 = *VAR_2); VAR_2++) {
  VAR_5 = VAR_13;
  for (VAR_8 = VAR_3; VAR_8 < VAR_4; VAR_8++) {
   VAR_10 = VAR_12[VAR_8];
   VAR_11 = VAR_6 | (~VAR_5 & VAR_0);
   if (VAR_10 != VAR_11) {
    if (VAR_9 < 32)
     FUNC_0(VAR_10, VAR_6, VAR_8,
        VAR_5, VAR_7);
    VAR_9++;
   }
   VAR_5++;
  }
 }

 if (VAR_9 > 32)
  FUNC_1("%s: %u errors suppressed\n",
   VAR_1->comm, VAR_9 - 32);

 return VAR_9;
}
