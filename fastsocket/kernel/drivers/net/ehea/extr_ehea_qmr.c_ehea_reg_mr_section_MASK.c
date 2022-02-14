
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct ehea_mr {int handle; } ;
struct ehea_adapter {int handle; } ;


 size_t VAR_0 ;
 long VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 size_t FUNC_3 (int ,int ,int ,int ,size_t,size_t) ;
 size_t FUNC_4 (void*) ;

__attribute__((used)) static u64 FUNC_5(int VAR_6, int VAR_7, int VAR_8, u64 *VAR_9,
          struct ehea_adapter *VAR_10,
          struct ehea_mr *VAR_11)
{
 void *VAR_12;
 u64 VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16 = 0;
 u64 VAR_17 = FUNC_4(VAR_9);

 void *VAR_18 = FUNC_0(VAR_6, VAR_7, VAR_8);

 for (VAR_13 = 0; VAR_13 < (VAR_2 / VAR_0); VAR_13++) {

  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
   VAR_12 = VAR_18 + ((VAR_16++) * VAR_1);
   VAR_9[VAR_14] = FUNC_4(VAR_12);
  }
  VAR_15 = FUNC_3(VAR_10->handle, VAR_11->handle, 0,
      0, VAR_17, VAR_0);

  if ((VAR_15 != VAR_5)
      && (VAR_15 != VAR_4)) {
   FUNC_2(VAR_10->handle, VAR_11->handle,
          VAR_3);
   FUNC_1("register_rpage_mr failed");
   return VAR_15;
  }
 }
 return VAR_15;
}
