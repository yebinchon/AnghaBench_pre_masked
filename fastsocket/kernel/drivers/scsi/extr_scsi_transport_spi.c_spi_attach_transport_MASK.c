
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spi_transport_attrs {int dummy; } ;
struct TYPE_5__ {int match; int * grp; int * class; } ;
struct TYPE_6__ {TYPE_1__ ac; } ;
struct scsi_transport_template {int target_size; int host_size; TYPE_2__ host_attrs; TYPE_2__ target_attrs; } ;
struct spi_internal {struct scsi_transport_template t; struct spi_function_template* f; } ;
struct spi_host_attrs {int dummy; } ;
struct spi_function_template {int dummy; } ;
struct TYPE_8__ {int class; } ;
struct TYPE_7__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct spi_internal* FUNC_0 (int,int ) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

struct scsi_transport_template *
FUNC_3(struct spi_function_template *VAR_7)
{
 struct spi_internal *VAR_8 = FUNC_0(sizeof(struct spi_internal),
      VAR_0);

 if (FUNC_2(!VAR_8))
  return ((void*)0);

 VAR_8->t.target_attrs.ac.class = &VAR_5.class;
 VAR_8->t.target_attrs.ac.grp = &VAR_6;
 VAR_8->t.target_attrs.ac.match = VAR_4;
 FUNC_1(&VAR_8->t.target_attrs);
 VAR_8->t.target_size = sizeof(struct spi_transport_attrs);
 VAR_8->t.host_attrs.ac.class = &VAR_2.class;
 VAR_8->t.host_attrs.ac.grp = &VAR_1;
 VAR_8->t.host_attrs.ac.match = VAR_3;
 FUNC_1(&VAR_8->t.host_attrs);
 VAR_8->t.host_size = sizeof(struct spi_host_attrs);
 VAR_8->f = VAR_7;

 return &VAR_8->t;
}
