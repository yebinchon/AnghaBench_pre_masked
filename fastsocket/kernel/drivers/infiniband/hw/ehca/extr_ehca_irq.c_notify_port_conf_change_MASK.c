
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ehca_sma_attr {scalar_t__ sm_sl; scalar_t__ sm_lid; scalar_t__ lid; scalar_t__ lmc; int pkey_tbl_len; int pkeys; } ;
struct ehca_shca {TYPE_1__* sport; } ;
struct TYPE_2__ {struct ehca_sma_attr saved_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ehca_shca*,int,int ,char*) ;
 int FUNC_1 (struct ehca_shca*,int,struct ehca_sma_attr*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ehca_shca *VAR_3, int VAR_4)
{
 struct ehca_sma_attr VAR_5;
 struct ehca_sma_attr *VAR_6 = &VAR_3->sport[VAR_4 - 1].saved_attr;

 FUNC_1(VAR_3, VAR_4, &VAR_5);

 if (VAR_5.sm_sl != VAR_6->sm_sl ||
     VAR_5.sm_lid != VAR_6->sm_lid)
  FUNC_0(VAR_3, VAR_4, VAR_2,
        "SM changed");

 if (VAR_5.lid != VAR_6->lid ||
     VAR_5.lmc != VAR_6->lmc)
  FUNC_0(VAR_3, VAR_4, VAR_0,
        "LID changed");

 if (VAR_5.pkey_tbl_len != VAR_6->pkey_tbl_len ||
     FUNC_2(VAR_5.pkeys, VAR_6->pkeys,
     sizeof(u16) * VAR_5.pkey_tbl_len))
  FUNC_0(VAR_3, VAR_4, VAR_1,
        "P_Key changed");

 *VAR_6 = VAR_5;
}
