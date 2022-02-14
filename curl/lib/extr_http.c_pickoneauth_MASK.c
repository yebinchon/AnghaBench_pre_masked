
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth {unsigned long avail; unsigned long want; unsigned long picked; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static bool FUNC_0(struct auth *VAR_10, unsigned long VAR_11)
{
  bool VAR_12;

  unsigned long VAR_13 = VAR_10->avail & VAR_10->want & VAR_11;
  VAR_12 = VAR_9;



  if(VAR_13 & VAR_3)
    VAR_10->picked = VAR_3;
  else if(VAR_13 & VAR_1)
    VAR_10->picked = VAR_1;
  else if(VAR_13 & VAR_2)
    VAR_10->picked = VAR_2;
  else if(VAR_13 & VAR_5)
    VAR_10->picked = VAR_5;
  else if(VAR_13 & VAR_6)
    VAR_10->picked = VAR_6;
  else if(VAR_13 & VAR_0)
    VAR_10->picked = VAR_0;
  else {
    VAR_10->picked = VAR_7;
    VAR_12 = VAR_8;
  }
  VAR_10->avail = VAR_4;

  return VAR_12;
}
