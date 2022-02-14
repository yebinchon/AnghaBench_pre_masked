
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemtek {unsigned long lastfreq; scalar_t__ muted; } ;


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
 unsigned long FUNC_0 (unsigned long,int ,int ) ;
 int FUNC_1 (struct gemtek*,int ,int) ;
 int FUNC_2 (struct gemtek*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_4(struct gemtek *VAR_13, unsigned long VAR_14)
{
 if (VAR_12 && VAR_11 && VAR_13->muted)
  return;

 VAR_14 = FUNC_0(VAR_14, VAR_9, VAR_8);

 VAR_13->lastfreq = VAR_14;
 VAR_13->muted = 0;

 FUNC_1(VAR_13, VAR_3, 0);
 FUNC_1(VAR_13, VAR_0, 0);
 FUNC_1(VAR_13, VAR_6, 0);
 FUNC_1(VAR_13, VAR_5, 0);
 FUNC_1(VAR_13, VAR_1, 1);
 FUNC_1(VAR_13, VAR_7, 0);

 FUNC_1(VAR_13, VAR_4, VAR_10);
 FUNC_1(VAR_13, VAR_2, FUNC_3(VAR_14));

 FUNC_2(VAR_13);
}
