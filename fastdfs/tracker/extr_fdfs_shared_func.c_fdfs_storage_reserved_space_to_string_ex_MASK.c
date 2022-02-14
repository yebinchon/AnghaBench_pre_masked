
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int FUNC_0 (char*,char*,int const,...) ;

const char *FUNC_1(const bool VAR_1, const int VAR_2, const int VAR_3, const double VAR_4, char *VAR_5)


{
 if (VAR_1 == VAR_0)
 {
  FUNC_0(VAR_5, "%d MB", VAR_2);
 }
 else
 {
  FUNC_0(VAR_5, "%d MB(%.2f%%)", (int)(VAR_3 * VAR_4), 100.00 * VAR_4);

 }

 return VAR_5;
}
