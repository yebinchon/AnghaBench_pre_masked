
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_driver {int write_irq_name; int write_irq; int read_irq_name; int read_irq; } ;
struct line {int have_irq; struct line_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int ,int ,int,int ,void*) ;

int FUNC_1(int VAR_7, int VAR_8, int VAR_9, struct line *VAR_10, void *VAR_11)
{
 const struct line_driver *VAR_12 = VAR_10->driver;
 int VAR_13 = 0, VAR_14 = VAR_0 | VAR_2 | VAR_1;

 if (VAR_8)
  VAR_13 = FUNC_0(VAR_12->read_irq, VAR_7, VAR_3,
           VAR_5, VAR_14,
           VAR_12->read_irq_name, VAR_11);
 if (VAR_13)
  return VAR_13;
 if (VAR_9)
  VAR_13 = FUNC_0(VAR_12->write_irq, VAR_7, VAR_4,
     VAR_6, VAR_14,
     VAR_12->write_irq_name, VAR_11);
 VAR_10->have_irq = 1;
 return VAR_13;
}
