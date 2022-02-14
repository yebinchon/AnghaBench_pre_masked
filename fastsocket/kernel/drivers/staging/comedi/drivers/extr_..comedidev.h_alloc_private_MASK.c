
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct comedi_device *VAR_2, int VAR_3)
{
 VAR_2->private = FUNC_0(VAR_3, VAR_1);
 if (!VAR_2->private)
  return -VAR_0;
 return 0;
}
