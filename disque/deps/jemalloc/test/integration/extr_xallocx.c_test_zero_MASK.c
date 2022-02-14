
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (int ,size_t,char*) ;
 int FUNC_3 (void*,int ) ;
 void* FUNC_4 (size_t,int ) ;
 int FUNC_5 (void*,int,size_t) ;
 size_t FUNC_6 (size_t,int ) ;
 int FUNC_7 (void*,int,size_t,size_t) ;
 int FUNC_8 (void*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_9(size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 void *VAR_6;


 VAR_4 = VAR_3;
 VAR_6 = FUNC_4(VAR_4, VAR_1);
 FUNC_1(VAR_6, "Unexpected mallocx() error");
 FUNC_0(FUNC_7(VAR_6, 0x00, 0, VAR_4), "Memory not filled: sz=%zu",
     VAR_4);





 FUNC_5(VAR_6, 0x7aU, VAR_4);
 FUNC_0(FUNC_7(VAR_6, 0x7aU, 0, VAR_4),
     "Memory not filled: sz=%zu", VAR_4);


 VAR_4 = VAR_2;
 FUNC_2(FUNC_8(VAR_6, VAR_4, 0, VAR_1), VAR_4,
     "Unexpected xallocx() error");
 FUNC_0(FUNC_7(VAR_6, 0x7aU, 0, VAR_4),
     "Memory not filled: sz=%zu", VAR_4);

 for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4 = VAR_5) {
  VAR_5 = FUNC_6(VAR_4+1, VAR_1);
  FUNC_2(FUNC_8(VAR_6, VAR_4+1, 0, VAR_1), VAR_5,
      "Unexpected xallocx() failure");
  FUNC_0(FUNC_7(VAR_6, 0x7aU, 0, VAR_4),
      "Memory not filled: sz=%zu", VAR_4);
  FUNC_0(FUNC_7(VAR_6, 0x00, VAR_4, VAR_5-VAR_4),
      "Memory not filled: sz=%zu, nsz-sz=%zu", VAR_4, VAR_5-VAR_4);
  FUNC_5((void *)((uintptr_t)VAR_6 + VAR_4), 0x7aU, VAR_5-VAR_4);
  FUNC_0(FUNC_7(VAR_6, 0x7aU, 0, VAR_5),
      "Memory not filled: nsz=%zu", VAR_5);
 }

 FUNC_3(VAR_6, 0);
}
