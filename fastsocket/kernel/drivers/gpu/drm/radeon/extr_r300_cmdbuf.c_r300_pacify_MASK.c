
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int track_flush; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_4(drm_radeon_private_t *VAR_18)
{
 uint32_t VAR_19, VAR_20, VAR_21;
 VAR_17;

 VAR_19 = VAR_9;
 VAR_21 = VAR_1;
 VAR_20 = VAR_4;
 if (!(VAR_18->track_flush & VAR_12)) {

  VAR_19 |= VAR_10;
  VAR_21 |= VAR_2;
  VAR_20 |= VAR_5;
 }


 FUNC_1(2);
 FUNC_3(FUNC_2(VAR_8, 0));
 FUNC_3(VAR_19);
 FUNC_0();

 FUNC_1(2);
 FUNC_3(FUNC_2(VAR_6, 0));
 FUNC_3(VAR_20);
 FUNC_0();

 FUNC_1(2);
 FUNC_3(FUNC_2(VAR_7, 0));
 FUNC_3(0);
 FUNC_0();

 FUNC_1(2);
 FUNC_3(FUNC_2(VAR_3, 0));
 FUNC_3(0);
 FUNC_0();
 FUNC_1(2);
 FUNC_3(FUNC_2(VAR_16, 0));
 FUNC_3(VAR_14);
 FUNC_0();

 FUNC_1(4);
 FUNC_3(FUNC_2(VAR_0, 0));
 FUNC_3(VAR_21);
 FUNC_3(FUNC_2(VAR_16, 0));
 FUNC_3(VAR_13 |
   VAR_15);
 FUNC_0();

 VAR_18->track_flush |= VAR_11 | VAR_12;
}
