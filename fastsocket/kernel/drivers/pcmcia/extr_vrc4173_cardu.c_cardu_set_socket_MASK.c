
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vrc4173_socket_t ;
typedef int uint8_t ;
struct TYPE_3__ {int Vpp; int Vcc; int flags; } ;
typedef TYPE_1__ socket_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_10, socket_state_t *VAR_11)
{
 vrc4173_socket_t *VAR_12 = &VAR_9[VAR_10];
 uint8_t VAR_13;

 if (((VAR_11->Vpp == 33) || (VAR_11->Vpp == 50)) && (VAR_11->Vpp != VAR_11->Vcc))
   return -VAR_3;

 VAR_13 = FUNC_2(VAR_11->Vcc);
 VAR_13 |= FUNC_3(VAR_11->Vpp);
 if (VAR_11->flags & VAR_7) VAR_13 |= VAR_0;
 FUNC_1(VAR_12, VAR_5, VAR_13);

 VAR_13 = FUNC_0(VAR_12, VAR_4) & VAR_1;
 if (VAR_11->flags & VAR_8) VAR_13 &= ~VAR_1;
 else VAR_13 |= VAR_1;
 if (VAR_11->flags & VAR_6) VAR_13 |= VAR_2;
 FUNC_1(VAR_12, VAR_4, VAR_13);

 return 0;
}
