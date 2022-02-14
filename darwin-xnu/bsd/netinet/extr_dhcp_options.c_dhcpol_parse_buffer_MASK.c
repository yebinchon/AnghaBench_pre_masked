
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int dhcpol_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;


 int FUNC_3 (char*) ;

boolean_t
FUNC_4(dhcpol_t * VAR_5, const void * VAR_6, int VAR_7)
{
    int VAR_8;
    const uint8_t * VAR_9;
    uint8_t VAR_10;

    FUNC_2(VAR_5);

    VAR_8 = VAR_7;
    VAR_10 = 128;
    for (VAR_9 = (const uint8_t *)VAR_6;
  VAR_10 != 129 && VAR_8 > VAR_2; ) {

 VAR_10 = VAR_9[VAR_2];

 switch (VAR_10) {
   case 129:

       FUNC_0(VAR_5, VAR_9);
       VAR_9++;
       VAR_8--;
       break;
   case 128:
       VAR_9++;
       VAR_8--;
       break;
   default:
       if (VAR_8 > VAR_0) {
    uint8_t VAR_11;

    VAR_11 = VAR_9[VAR_0];
    FUNC_0(VAR_5, VAR_9);
    VAR_8 -= (VAR_11 + VAR_1);
    VAR_9 += (VAR_11 + VAR_1);
       }
       else {
    VAR_8 = -1;
       }
       break;
 }
    }
    if (VAR_8 < 0) {

 FUNC_3(("dhcp_options: parse failed near tag %d\n", VAR_10));
 FUNC_1(VAR_5);
 return (VAR_3);
    }
    return (VAR_4);
}
