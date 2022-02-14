
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {int pan; TYPE_1__ ST; } ;
struct TYPE_6__ {int slot_mask; int dacen; TYPE_2__ OPN; int * CH; } ;


 int FUNC_0 (int*,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 TYPE_3__ VAR_0 ;

int FUNC_6(int *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;


 if (VAR_4) FUNC_3(VAR_1, 0, VAR_2<<VAR_3);
 FUNC_4( &VAR_0[0] );
 FUNC_4( &VAR_0[1] );
 if( (VAR_0 & 0xc0) )

  FUNC_5();
 else
  FUNC_4( &VAR_0[2] );
 FUNC_4( &VAR_0[3] );
 FUNC_4( &VAR_0[4] );
 FUNC_4( &VAR_0[5] );

 VAR_5 = VAR_0;
 if (VAR_3) VAR_3 = 1;



 FUNC_2();
 if (VAR_0 & 0x00000f) VAR_6 |= FUNC_0(VAR_1, VAR_2, 0, VAR_3|((VAR_5&0x003)<<4)) << 0;
 if (VAR_0 & 0x0000f0) VAR_6 |= FUNC_0(VAR_1, VAR_2, 1, VAR_3|((VAR_5&0x00c)<<2)) << 1;
 if (VAR_0 & 0x000f00) VAR_6 |= FUNC_0(VAR_1, VAR_2, 2, VAR_3|((VAR_5&0x030) )) << 2;
 if (VAR_0 & 0x00f000) VAR_6 |= FUNC_0(VAR_1, VAR_2, 3, VAR_3|((VAR_5&0x0c0)>>2)) << 3;
 if (VAR_0 & 0x0f0000) VAR_6 |= FUNC_0(VAR_1, VAR_2, 4, VAR_3|((VAR_5&0x300)>>4)) << 4;
 if (VAR_0 & 0xf00000) VAR_6 |= FUNC_0(VAR_1, VAR_2, 5, VAR_3|((VAR_5&0xc00)>>6)|(VAR_0<<2)) << 5;
 FUNC_1();

 return VAR_6;
}
