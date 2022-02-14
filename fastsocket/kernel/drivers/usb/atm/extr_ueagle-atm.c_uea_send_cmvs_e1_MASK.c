
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int firmid; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct uea_softc {TYPE_2__ stats; } ;
struct uea_cmvs_v2 {int data; int offset; int address; } ;
struct uea_cmvs_v1 {int data; int offset; int address; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uea_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct uea_softc*,void**,struct firmware const**,int*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct uea_softc*,int ,int,int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct uea_softc*,int,int ,int) ;

__attribute__((used)) static int FUNC_11(struct uea_softc *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 void *VAR_6;
 const struct firmware *VAR_7;
 int VAR_8 = 1;


 VAR_4 = FUNC_10(VAR_2, VAR_0, 0, 1);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 = FUNC_7(VAR_2, VAR_1, 10, &VAR_2->stats.phy.firmid);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_6(FUNC_0(VAR_2), "ATU-R firmware version : %x\n",
   VAR_2->stats.phy.firmid);


  VAR_4 = VAR_5 = FUNC_4(VAR_2, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_4 < 0)
  return VAR_4;


 if (VAR_8 == 1) {
  struct uea_cmvs_v1 *VAR_9 = VAR_6;

  FUNC_9(FUNC_0(VAR_2), "use deprecated cmvs version, "
   "please update your firmware\n");

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   VAR_4 = FUNC_10(VAR_2, FUNC_2(&VAR_9[VAR_3].address),
      FUNC_1(&VAR_9[VAR_3].offset),
      FUNC_2(&VAR_9[VAR_3].data));
   if (VAR_4 < 0)
    goto out;
  }
 } else if (VAR_8 == 2) {
  struct uea_cmvs_v2 *VAR_10 = VAR_6;

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   VAR_4 = FUNC_10(VAR_2, FUNC_2(&VAR_10[VAR_3].address),
      (u16) FUNC_2(&VAR_10[VAR_3].offset),
      FUNC_2(&VAR_10[VAR_3].data));
   if (VAR_4 < 0)
    goto out;
  }
 } else {

  FUNC_5(FUNC_0(VAR_2), "bad cmvs version %d\n", VAR_8);
  goto out;
 }


 VAR_4 = FUNC_10(VAR_2, VAR_0, 0, 2);
 FUNC_8(FUNC_0(VAR_2), "Entering in R-ACT-REQ state\n");
 FUNC_6(FUNC_0(VAR_2), "modem started, waiting synchronization...\n");
out:
 FUNC_3(VAR_7);
 return VAR_4;
}
