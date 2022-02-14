
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_2__ {int Protocol; } ;
typedef TYPE_1__ MAC_HEADER ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(UCHAR *VAR_3, UINT VAR_4, UINT VAR_5, USHORT VAR_6)
{
 MAC_HEADER *VAR_7;
 USHORT VAR_8;

 if (VAR_3 == ((void*)0) || VAR_4 == 0 || VAR_5 == 0)
 {
  return 0;
 }
 if (VAR_6 == 0)
 {
  VAR_6 = VAR_2;
 }

 if (VAR_4 < sizeof(MAC_HEADER))
 {
  return 0;
 }

 VAR_7 = (MAC_HEADER *)VAR_3;

 VAR_3 += sizeof(MAC_HEADER);
 VAR_4 -= sizeof(MAC_HEADER);

 VAR_8 = FUNC_1(VAR_7->Protocol);

 if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
 {

  return FUNC_0(VAR_3, VAR_4, VAR_5);
 }
 else if (VAR_8 == VAR_6)
 {

  if (VAR_4 < 4)
  {
   return 0;
  }

  VAR_3 += 2;
  VAR_4 -= 2;

  VAR_8 = FUNC_2(VAR_3);

  if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
  {
   if (VAR_5 >= 5)
   {
    VAR_5 -= 4;

    VAR_3 += 2;
    VAR_4 -= 2;

    return FUNC_0(VAR_3, VAR_4, VAR_5);
   }
  }
 }

 return 0;
}
