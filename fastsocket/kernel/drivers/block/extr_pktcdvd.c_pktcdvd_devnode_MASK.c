
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int disk_name; } ;
typedef int mode_t ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_1(struct gendisk *VAR_1, mode_t *VAR_2)
{
 return FUNC_0(VAR_0, "pktcdvd/%s", VAR_1->disk_name);
}
