
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sas_internal {TYPE_3__* dft; } ;
struct TYPE_5__ {TYPE_1__* shost; } ;
struct sas_ha_struct {TYPE_2__ core; } ;
struct TYPE_6__ {int (* lldd_write_gpio ) (struct sas_ha_struct*,int ,int ,int ,int *) ;} ;
struct TYPE_4__ {int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sas_ha_struct*,int ,int ,int ,int *) ;
 struct sas_internal* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sas_ha_struct *VAR_3, u8 *VAR_4,
       u8 VAR_5, u8 VAR_6, u8 VAR_7,
       u8 *VAR_8)
{
 struct sas_internal *VAR_9 = FUNC_1(VAR_3->core.shost->transportt);
 int VAR_10;

 if (VAR_9->dft->lldd_write_gpio == ((void*)0)) {
  VAR_4[2] = VAR_2;
  return 0;
 }

 VAR_10 = VAR_9->dft->lldd_write_gpio(VAR_3, VAR_5, VAR_6,
       VAR_7, VAR_8);

 if (VAR_10 < 0) {
  VAR_4[2] = VAR_1;
  VAR_10 = 0;
 } else
  VAR_4[2] = VAR_0;

 return VAR_10;
}
