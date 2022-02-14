
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_iso {int dummy; } ;
struct firedtv {struct hpsb_iso* backend_data; } ;


 int FUNC_0 (struct hpsb_iso*) ;
 int FUNC_1 (struct hpsb_iso*) ;

__attribute__((used)) static void FUNC_2(struct firedtv *VAR_0)
{
 struct hpsb_iso *VAR_1 = VAR_0->backend_data;

 if (VAR_1 != ((void*)0)) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 }
 VAR_0->backend_data = ((void*)0);
}
