
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_timing {int cycle; int cyc8b; scalar_t__ act8b; scalar_t__ rec8b; scalar_t__ active; scalar_t__ recover; } ;
struct ata_device {int* id; unsigned short pio_mode; } ;
typedef int p ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 struct ata_timing* FUNC_0 (unsigned short) ;
 int FUNC_1 (struct ata_timing*,struct ata_timing*,struct ata_timing*,int) ;
 int FUNC_2 (struct ata_timing*,struct ata_timing*,int,int) ;
 int FUNC_3 (struct ata_timing*,struct ata_timing const*,int) ;
 int FUNC_4 (struct ata_timing*,int ,int) ;

int FUNC_5(struct ata_device *VAR_14, unsigned short VAR_15,
         struct ata_timing *VAR_16, int VAR_17, int VAR_18)
{
 const struct ata_timing *VAR_19;
 struct ata_timing VAR_20;





 if (!(VAR_19 = FUNC_0(VAR_15)))
  return -VAR_7;

 FUNC_3(VAR_16, VAR_19, sizeof(*VAR_19));






 if (VAR_14->id[VAR_3] & 2) {
  FUNC_4(&VAR_20, 0, sizeof(VAR_20));
  if (VAR_15 >= VAR_10 && VAR_15 <= VAR_13) {
   if (VAR_15 <= VAR_11) VAR_20.cycle = VAR_20.cyc8b = VAR_14->id[VAR_1];
         else VAR_20.cycle = VAR_20.cyc8b = VAR_14->id[VAR_2];
  } else if (VAR_15 >= VAR_8 && VAR_15 <= VAR_9) {
   VAR_20.cycle = VAR_14->id[VAR_0];
  }
  FUNC_1(&VAR_20, VAR_16, VAR_16, VAR_6 | VAR_5);
 }





 FUNC_2(VAR_16, VAR_16, VAR_17, VAR_18);







 if (VAR_15 > VAR_12) {
  FUNC_5(VAR_14, VAR_14->pio_mode, &VAR_20, VAR_17, VAR_18);
  FUNC_1(&VAR_20, VAR_16, VAR_16, VAR_4);
 }





 if (VAR_16->act8b + VAR_16->rec8b < VAR_16->cyc8b) {
  VAR_16->act8b += (VAR_16->cyc8b - (VAR_16->act8b + VAR_16->rec8b)) / 2;
  VAR_16->rec8b = VAR_16->cyc8b - VAR_16->act8b;
 }

 if (VAR_16->active + VAR_16->recover < VAR_16->cycle) {
  VAR_16->active += (VAR_16->cycle - (VAR_16->active + VAR_16->recover)) / 2;
  VAR_16->recover = VAR_16->cycle - VAR_16->active;
 }




 if (VAR_16->active + VAR_16->recover > VAR_16->cycle)
  VAR_16->cycle = VAR_16->active + VAR_16->recover;

 return 0;
}
