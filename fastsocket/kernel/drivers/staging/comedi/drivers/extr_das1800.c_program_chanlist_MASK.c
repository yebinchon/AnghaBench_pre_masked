
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int spinlock; scalar_t__ iobase; } ;
struct comedi_cmd {int chanlist_len; int * chanlist; } ;


 int const FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_4, struct comedi_cmd VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 const int VAR_10 = 0x3;
 const int VAR_11 = 8;

 VAR_7 = VAR_5.chanlist_len;

 FUNC_4(&VAR_4->spinlock, VAR_9);
 FUNC_2(VAR_3, VAR_4->iobase + VAR_2);
 FUNC_2(VAR_7 - 1, VAR_4->iobase + VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_8 =
      FUNC_0(VAR_5.
       chanlist[VAR_6]) | ((FUNC_1(VAR_5.chanlist[VAR_6]) &
          VAR_10) << VAR_11);
  FUNC_3(VAR_8, VAR_4->iobase + VAR_0);
 }
 FUNC_2(VAR_7 - 1, VAR_4->iobase + VAR_1);
 FUNC_5(&VAR_4->spinlock, VAR_9);

 return;
}
