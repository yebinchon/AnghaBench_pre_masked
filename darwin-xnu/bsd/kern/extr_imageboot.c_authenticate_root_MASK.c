
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,void**,size_t*) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (char const*,void*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_0)
{
 char *VAR_1 = ((void*)0);
 void *VAR_2 = ((void*)0);
 size_t VAR_3 = 32*1024*1024UL;
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_0, &VAR_1);
 if (VAR_4) {
  FUNC_1("failed creating chunklist path");
  goto out;
 }

 FUNC_0("validating root against chunklist %s", VAR_1);






 FUNC_0("reading chunklist");
 VAR_4 = FUNC_4(VAR_1, &VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_1("failed to read chunklist");
  goto out;
 }

 FUNC_0("validating chunklist");
 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0("missing or incorrect signature on chunklist");
  goto out;
 } else if (VAR_4) {
  FUNC_1("failed to validate chunklist");
  goto out;
 } else {
  FUNC_0("successfully validated chunklist");
 }

 FUNC_0("validating root image against chunklist");
 VAR_4 = FUNC_6(VAR_0, VAR_2);
 if (VAR_4) {
  FUNC_1("failed to validate root image against chunklist (%d)", VAR_4);
  goto out;
 }


 FUNC_0("root image authenticated");

 out:
 FUNC_3(VAR_2);
 FUNC_3(VAR_1);
 return VAR_4;
}
