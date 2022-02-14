
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbstub_threadinfo {char* display; char* name; char* more_display; } ;
typedef int s32 ;


 void** VAR_0 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int) ;

void FUNC_4(char *VAR_1,s32 VAR_2,s32 VAR_3,struct gdbstub_threadinfo *VAR_4)
{
 s32 VAR_5;

 *VAR_1++ = 'q';
 *VAR_1++ = 'Q';
 VAR_1 = FUNC_0(VAR_1,VAR_2);
 VAR_1 = FUNC_3(VAR_1,VAR_3);

 if(VAR_2&0x01) {
  FUNC_1(VAR_1,"00000001",8);
  VAR_1 += 8;
  *VAR_1++ = '1';
  *VAR_1++ = '0';
  VAR_1 = FUNC_3(VAR_1,VAR_3);
 }
 if(VAR_2&0x02) {
  FUNC_1(VAR_1,"00000002",8);
  VAR_1 += 8;
  *VAR_1++ = '0';
  *VAR_1++ = '1';
  *VAR_1++ = '1';
 }
 if(VAR_2&0x04) {
  FUNC_1(VAR_1,"00000004",8);
  VAR_1 += 8;

  VAR_4->display[sizeof(VAR_4->display)-1] = 0;
  VAR_5 = FUNC_2(VAR_4->display);

  *VAR_1++ = VAR_0[(VAR_5>>4)&0x0f];
  *VAR_1++ = VAR_0[VAR_5&0x0f];

  FUNC_1(VAR_1,VAR_4->display,VAR_5);
  VAR_1 += VAR_5;
 }
 if(VAR_2&0x08) {
  FUNC_1(VAR_1,"00000008",8);
  VAR_1 += 8;

  VAR_4->display[sizeof(VAR_4->name)-1] = 0;
  VAR_5 = FUNC_2(VAR_4->name);

  *VAR_1++ = VAR_0[(VAR_5>>4)&0x0f];
  *VAR_1++ = VAR_0[VAR_5&0x0f];

  FUNC_1(VAR_1,VAR_4->name,VAR_5);
  VAR_1 += VAR_5;
 }
 if(VAR_2&0x10) {
  FUNC_1(VAR_1,"00000010",8);
  VAR_1 += 8;

  VAR_4->display[sizeof(VAR_4->more_display)-1] = 0;
  VAR_5 = FUNC_2(VAR_4->more_display);

  *VAR_1++ = VAR_0[(VAR_5>>4)&0x0f];
  *VAR_1++ = VAR_0[VAR_5&0x0f];

  FUNC_1(VAR_1,VAR_4->more_display,VAR_5);
  VAR_1 += VAR_5;
 }
 *VAR_1 = 0;
}
