
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulg ;
typedef int uch ;
struct moveparams {char* low_buffer_start; int hcount; int * high_buffer_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 long VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;

void FUNC_1(struct moveparams *VAR_10)
{
 VAR_7 = (uch *)(((ulg) &VAR_5) + VAR_2);




 if ((VAR_0 > VAR_1 ? VAR_0 : VAR_1) < (3 * 1024))
  FUNC_0("Less than 4MB of memory.\n");

 VAR_10->low_buffer_start = VAR_9 = (char *) VAR_4;
 VAR_8 = 1;
 VAR_6 = (long) VAR_7;
 if (0x100000 + VAR_3 > (ulg) VAR_7) {
  VAR_7 = (uch *)(0x100000 + VAR_3);
  VAR_10->hcount = 0;
 } else {
  VAR_10->hcount = -1;
 }
 VAR_10->high_buffer_start = VAR_7;
}
