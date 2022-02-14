
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTA_HF_CLIENT_HDR ;
typedef int evt ;
typedef int UINT8 ;
struct TYPE_2__ {int (* p_cback ) (int ,int *) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(UINT8 VAR_1)
{
    tBTA_HF_CLIENT_HDR VAR_2;

    FUNC_0(&VAR_2, 0, sizeof(VAR_2));


    (*VAR_0.p_cback)(VAR_1, (tBTA_HF_CLIENT_HDR *) &VAR_2);
}
