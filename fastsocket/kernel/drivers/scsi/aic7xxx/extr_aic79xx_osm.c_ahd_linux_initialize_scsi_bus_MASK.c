
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int flags; int features; int our_id; } ;
struct ahd_initiator_tinfo {int dummy; } ;
struct ahd_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahd_devinfo*,int ,int,int ,char,int ) ;
 struct ahd_initiator_tinfo* FUNC_1 (struct ahd_softc*,char,int ,int,struct ahd_tmode_tstate**) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,unsigned long*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,char,int ) ;
 int FUNC_6 (struct ahd_softc*,unsigned long*) ;
 int FUNC_7 (struct ahd_softc*,struct ahd_devinfo*,struct ahd_tmode_tstate*,struct ahd_initiator_tinfo*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct ahd_softc *VAR_8)
{
 u_int VAR_9;
 u_int VAR_10;
 unsigned long VAR_11;

 VAR_9 = 0;
 VAR_10 = 0;

 if (VAR_7 != 0)
  VAR_8->flags &= ~VAR_1;

 if ((VAR_8->flags & VAR_1) != 0)
  FUNC_5(VAR_8, 'A', VAR_6);
 else
  VAR_10 = (VAR_8->features & VAR_2) ? 16 : 8;

 FUNC_3(VAR_8, &VAR_11);





 for (; VAR_9 < VAR_10; VAR_9++) {
  struct ahd_devinfo VAR_12;
  struct ahd_initiator_tinfo *VAR_13;
  struct ahd_tmode_tstate *VAR_14;

  VAR_13 = FUNC_1(VAR_8, 'A', VAR_8->our_id,
         VAR_9, &VAR_14);
  FUNC_0(&VAR_12, VAR_8->our_id, VAR_9,
        VAR_4, 'A', VAR_5);
  FUNC_7(VAR_8, &VAR_12, VAR_14,
           VAR_13, VAR_0);
 }
 FUNC_6(VAR_8, &VAR_11);

 if ((VAR_8->flags & VAR_1) != 0) {
  FUNC_2(VAR_8);
  FUNC_8(VAR_3);
  FUNC_4(VAR_8);
 }
}
