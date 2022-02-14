
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ics932s401_data {int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_0(struct ics932s401_data *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_7->regs[VAR_4] & VAR_1;
 VAR_9 = VAR_7->regs[VAR_5];


 VAR_9 |= ((int)VAR_7->regs[VAR_4] & 0x80) << 1;
 VAR_9 |= ((int)VAR_7->regs[VAR_4] & 0x40) << 3;

 VAR_10 = VAR_0 * (VAR_9 + 8) / (VAR_8 + 2);
 VAR_10 /= VAR_6[VAR_7->regs[VAR_3] >>
    VAR_2];

 return VAR_10;
}
