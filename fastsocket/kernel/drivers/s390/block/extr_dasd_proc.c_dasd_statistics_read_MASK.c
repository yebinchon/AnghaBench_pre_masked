
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_profile_info {int dasd_io_reqs; int dasd_io_sects; int dasd_io_nr_req; int dasd_io_time3; int dasd_io_time2ps; int dasd_io_time2; int dasd_io_time1; int dasd_io_timps; int dasd_io_times; int dasd_io_secs; } ;
typedef int off_t ;


 int FUNC_0 (char*,char**,int ,int,int*,unsigned long) ;
 struct dasd_profile_info VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,int ,int) ;
 unsigned long FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, char **VAR_3, off_t VAR_4,
       int VAR_5, int *VAR_6, void *VAR_7)
{
 unsigned long VAR_8;
 VAR_8 = FUNC_2(VAR_2, "Statistics are not activated in this kernel\n");

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
}
