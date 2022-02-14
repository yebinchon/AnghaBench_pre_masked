
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device_file_info {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 struct comedi_device_file_info** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct comedi_device_file_info *FUNC_3(unsigned VAR_3)
{
 unsigned long VAR_4;
 struct comedi_device_file_info *VAR_5;

 FUNC_0(VAR_3 >= VAR_0);
 FUNC_1(&VAR_2, VAR_4);
 VAR_5 = VAR_1[VAR_3];
 FUNC_2(&VAR_2, VAR_4);
 return VAR_5;
}
