
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int * i2c_bus; int refcount; int pci; int base_io_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cx25821_dev*) ;
 int FUNC_2 (struct cx25821_dev*) ;
 int FUNC_3 (struct cx25821_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cx25821_dev*) ;
 int FUNC_6 (struct cx25821_dev*,int) ;
 int FUNC_7 (struct cx25821_dev*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void FUNC_10(struct cx25821_dev *VAR_3)
{
 int VAR_4;

 if (!VAR_3->base_io_addr)
  return;

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);

 FUNC_9(VAR_3->base_io_addr, FUNC_8(VAR_3->pci, 0));

 if (!FUNC_0(&VAR_3->refcount))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_6(VAR_3, VAR_4);

 for (VAR_4 = VAR_2;
      VAR_4 <= VAR_0; VAR_4++) {
  FUNC_6(VAR_3, VAR_4);
 }

 FUNC_7(VAR_3);

 FUNC_4(&VAR_3->i2c_bus[0]);
 FUNC_5(VAR_3);
}
