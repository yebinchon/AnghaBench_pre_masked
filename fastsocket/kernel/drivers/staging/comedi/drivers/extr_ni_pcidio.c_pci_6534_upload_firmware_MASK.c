
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (int*,int) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int,void*,int) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4, int VAR_5[])
{
 int VAR_6;
 void *VAR_7, *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (VAR_5[VAR_3] == 0)
  return 0;
 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 = FUNC_0(VAR_5, 0);
 VAR_10 = VAR_5[VAR_0];
 VAR_6 = FUNC_2(VAR_4, 2, VAR_7, VAR_10);
 if (VAR_6 < 0)
  return VAR_6;
 FUNC_1(VAR_4);
 VAR_8 = FUNC_0(VAR_5, 1);
 VAR_11 = VAR_5[VAR_1];
 VAR_6 = FUNC_2(VAR_4, 0, VAR_8, VAR_11);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_9 = FUNC_0(VAR_5, 2);
 VAR_12 = VAR_5[VAR_2];
 VAR_6 = FUNC_2(VAR_4, 1, VAR_9, VAR_12);
 if (VAR_6 < 0)
  return VAR_6;
 return 0;
}
