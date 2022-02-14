
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_type {char const* name; int dev_attrs; int shutdown; int resume; int suspend; int remove; int probe; int match; } ;


 int FUNC_0 (struct bus_type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_1(struct bus_type *VAR_7, const char *VAR_8)
{
 VAR_7->name = VAR_8;
 VAR_7->match = VAR_0;
 VAR_7->probe = VAR_2;
 VAR_7->remove = VAR_3;
 VAR_7->suspend = VAR_6;
 VAR_7->resume = VAR_4;
 VAR_7->shutdown = VAR_5;
 VAR_7->dev_attrs = VAR_1;
 return FUNC_0(VAR_7);
}
