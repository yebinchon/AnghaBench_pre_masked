
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int irm_id; int node_id; scalar_t__ is_irm; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hpsb_host*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct hpsb_host*,int,int ,int,int *,int) ;
 int FUNC_5 (struct hpsb_host*,int ) ;
 int FUNC_6 (struct hpsb_host*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct hpsb_host *VAR_5, int VAR_6)
{
 quadlet_t VAR_7;
 int VAR_8;

 if (VAR_4 || VAR_5->is_irm)
  return 1;

 VAR_8 = FUNC_4(VAR_5, VAR_2 | (VAR_5->irm_id),
      FUNC_3(VAR_5),
      (VAR_1 | VAR_0),
      &VAR_7, sizeof(quadlet_t));

 if (VAR_8 < 0 || !(FUNC_2(VAR_7) & 0x80000000)) {


  FUNC_0("Current remote IRM is not 1394a-2000 compliant, resetting...");

  if (VAR_6 >= 5) {

   FUNC_0("Stopping reset loop for IRM sanity");
   return 1;
  }

  FUNC_6(VAR_5, FUNC_1(VAR_5->node_id), -1);
  FUNC_5(VAR_5, VAR_3);

  return 0;
 }

 return 1;
}
