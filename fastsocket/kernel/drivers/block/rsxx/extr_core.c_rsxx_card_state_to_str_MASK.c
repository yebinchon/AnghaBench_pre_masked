
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (unsigned int) ;

__attribute__((used)) static const char * const FUNC_1(unsigned int VAR_0)
{
 static const char * const VAR_1[] = {
  "Unknown", "Shutdown", "Starting", "Formatting",
  "Uninitialized", "Good", "Shutting Down",
  "Fault", "Read Only Fault", "dStroying"
 };

 return VAR_1[FUNC_0(VAR_0)];
}
