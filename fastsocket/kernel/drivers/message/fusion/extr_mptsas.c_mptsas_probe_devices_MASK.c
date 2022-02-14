
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mptsas_phyinfo {int dummy; } ;
struct mptsas_devinfo {int handle; int device_info; int flags; } ;
typedef int MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct mptsas_phyinfo*) ;
 scalar_t__ FUNC_1 (struct mptsas_phyinfo*) ;
 struct mptsas_phyinfo* FUNC_2 (int *,struct mptsas_devinfo*) ;
 int FUNC_3 (int *,struct mptsas_devinfo*,int ,int) ;

__attribute__((used)) static void
FUNC_4(MPT_ADAPTER *VAR_6)
{
 u16 VAR_7;
 struct mptsas_devinfo VAR_8;
 struct mptsas_phyinfo *VAR_9;

 VAR_7 = 0xFFFF;
 while (!(FUNC_3(VAR_6, &VAR_8,
     VAR_5, VAR_7))) {

  VAR_7 = VAR_8.handle;

  if ((VAR_8.device_info &
       (VAR_3 |
        VAR_4 |
        VAR_2)) == 0)
   continue;



  if (!(VAR_8.flags & VAR_1)
   || !(VAR_8.flags &
   VAR_0))
   continue;

  VAR_9 = FUNC_2(VAR_6, &VAR_8);
  if (!VAR_9)
   continue;

  if (FUNC_1(VAR_9))
   continue;

  FUNC_0(VAR_6, VAR_9);
 }
}
