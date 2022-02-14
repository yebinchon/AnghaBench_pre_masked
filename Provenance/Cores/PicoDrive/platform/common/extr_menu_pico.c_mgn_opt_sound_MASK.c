
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,int,char const*) ;
 char const* VAR_3 ;

__attribute__((used)) static const char *FUNC_1(int VAR_4, int *VAR_5)
{
 const char *VAR_6;
 *VAR_5 = -8;
 VAR_6 = (VAR_1 & VAR_0) ? "stereo" : "mono";
 FUNC_0(VAR_3, "%5iHz %s", VAR_2, VAR_6);
 return VAR_3;
}
