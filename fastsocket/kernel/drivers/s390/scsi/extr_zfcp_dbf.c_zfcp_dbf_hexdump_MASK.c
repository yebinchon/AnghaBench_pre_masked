
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf_dump {int total_size; int offset; scalar_t__ size; int data; int tag; } ;
typedef int debug_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,struct zfcp_dbf_dump*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (void*,int ,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(debug_info_t *VAR_1, void *VAR_2, int VAR_3,
        int VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7;
 struct zfcp_dbf_dump *VAR_8 = VAR_2;
 int VAR_9 = VAR_3 - sizeof(*VAR_8);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += VAR_8->size) {
  FUNC_2(VAR_2, 0, VAR_3);
  FUNC_4(VAR_8->tag, "dump", VAR_0);
  VAR_8->total_size = VAR_6;
  VAR_8->offset = VAR_7;
  VAR_8->size = FUNC_3(VAR_6 - VAR_7, VAR_9);
  FUNC_1(VAR_8->data, VAR_5 + VAR_7, VAR_8->size);
  FUNC_0(VAR_1, VAR_4, VAR_8, VAR_8->size + sizeof(*VAR_8));
 }
}
