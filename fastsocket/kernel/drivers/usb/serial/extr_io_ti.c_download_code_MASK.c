
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edgeport_serial {int serial; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int*) ;

__attribute__((used)) static int FUNC_1(struct edgeport_serial *VAR_1, __u8 *VAR_2,
       int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6;
 int VAR_7;


 for (VAR_5 = 0; VAR_5 < VAR_3; ) {

  VAR_6 = VAR_3 - VAR_5;
  if (VAR_6 > VAR_0)
   VAR_6 = VAR_0;


  VAR_4 = FUNC_0(VAR_1->serial, &VAR_2[VAR_5],
       VAR_6, &VAR_7);
  if (VAR_4)
   break;

  VAR_5 += VAR_7;
 }

 return VAR_4;
}
