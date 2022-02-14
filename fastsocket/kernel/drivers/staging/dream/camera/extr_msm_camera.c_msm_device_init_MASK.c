
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_sync {int dummy; } ;
struct msm_device {struct msm_sync* sync; int opened; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct msm_device*,int,int ,char*,int *) ;
 int FUNC_4 (struct msm_device*,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct msm_device *VAR_4,
  struct msm_sync *VAR_5,
  int VAR_6)
{
 int VAR_7 = 3 * VAR_6;
 int VAR_8 = FUNC_3(VAR_4, VAR_6,
  FUNC_1(FUNC_0(VAR_0), VAR_7),
  "control", &VAR_2);
 if (VAR_8 < 0) {
  FUNC_5("error creating control node: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_4 + 1, VAR_6,
  FUNC_1(FUNC_0(VAR_0), VAR_7 + 1),
  "config", &VAR_1);
 if (VAR_8 < 0) {
  FUNC_5("error creating config node: %d\n", VAR_8);
  FUNC_4(VAR_4, FUNC_1(FUNC_0(VAR_0),
    VAR_7));
  return VAR_8;
 }

 VAR_8 = FUNC_3(VAR_4 + 2, VAR_6,
  FUNC_1(FUNC_0(VAR_0), VAR_7 + 2),
  "frame", &VAR_3);
 if (VAR_8 < 0) {
  FUNC_5("error creating frame node: %d\n", VAR_8);
  FUNC_4(VAR_4,
   FUNC_1(FUNC_0(VAR_0), VAR_7));
  FUNC_4(VAR_4 + 1,
   FUNC_1(FUNC_0(VAR_0), VAR_7 + 1));
  return VAR_8;
 }

 FUNC_2(&VAR_4[0].opened, 0);
 FUNC_2(&VAR_4[1].opened, 0);
 FUNC_2(&VAR_4[2].opened, 0);

 VAR_4[0].sync = VAR_5;
 VAR_4[1].sync = VAR_5;
 VAR_4[2].sync = VAR_5;

 return VAR_8;
}
