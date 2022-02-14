
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gxfifo {scalar_t__ buf_start; scalar_t__ buf_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0()
{
 struct __gxfifo *VAR_4 = (struct __gxfifo*)&VAR_1;
 struct __gxfifo *VAR_5 = (struct __gxfifo*)&VAR_0;

 if(!VAR_2 || !VAR_3) return 0;

 if((VAR_5->buf_start==VAR_4->buf_start)&&(VAR_5->buf_end==VAR_4->buf_end)) return 1;

 return 0;
}
