
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sch_no; } ;
struct qdio_irq {TYPE_2__ schid; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_3__ {struct qdio_irq* qdio_data; } ;


 int FUNC_0 (int ,struct qdio_irq*,char*) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct qdio_irq*,int ) ;

__attribute__((used)) static void FUNC_3(struct ccw_device *VAR_5, int VAR_6,
          int VAR_7)
{
 struct qdio_irq *VAR_8 = VAR_5->private->qdio_data;

 FUNC_0(VAR_0, VAR_8, "qest irq");

 if (VAR_6)
  goto error;
 if (VAR_7 & ~(VAR_2 | VAR_1))
  goto error;
 if (!(VAR_7 & VAR_2))
  goto error;
 FUNC_2(VAR_8, VAR_4);
 return;

error:
 FUNC_1("%4x EQ:error", VAR_8->schid.sch_no);
 FUNC_1("ds: %2x cs:%2x", VAR_7, VAR_6);
 FUNC_2(VAR_8, VAR_3);
}
