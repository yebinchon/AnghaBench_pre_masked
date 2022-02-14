
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvr2_hdw {unsigned int* cmd_buffer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int*,unsigned int,int const) ;
 int FUNC_1 (unsigned int*,int ,int) ;
 int FUNC_2 (struct pvr2_hdw*,unsigned int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct pvr2_hdw *VAR_1,
        unsigned int VAR_2,
        const u32 *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5,VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 unsigned int VAR_9;
 while (VAR_4) {
  VAR_9 = 8;
  if (VAR_9 > VAR_4) VAR_9 = VAR_4;
  FUNC_1(VAR_1->cmd_buffer,0,sizeof(VAR_1->cmd_buffer));
  VAR_7 = 0;
  VAR_1->cmd_buffer[VAR_7++] = VAR_0;
  for (VAR_5 = 0; VAR_5 < VAR_9; VAR_5++) {
   VAR_6 = VAR_5 + VAR_2;
   VAR_1->cmd_buffer[VAR_7+6] = (VAR_6 & 0xffu);
   VAR_1->cmd_buffer[VAR_7+5] = ((VAR_6>>8) & 0xffu);
   VAR_1->cmd_buffer[VAR_7+4] = ((VAR_6>>16) & 0xffu);
   FUNC_0(VAR_1->cmd_buffer, VAR_7,VAR_3[VAR_5]);
   VAR_7 += 7;
  }
  VAR_8 = FUNC_2(VAR_1,
     VAR_1->cmd_buffer,1+(VAR_9*7),
     ((void*)0),0);
  if (VAR_8) return VAR_8;
  VAR_3 += VAR_9;
  VAR_4 -= VAR_9;
  VAR_2 += VAR_9;
 }

 return 0;
}
