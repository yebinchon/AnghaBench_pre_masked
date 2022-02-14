
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char,int,char*,size_t,size_t) ;
 int FUNC_2 (void*,char*) ;
 int FUNC_3 (int,char*,size_t) ;
 int FUNC_4 (char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (size_t,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (char*,size_t,int ) ;
 size_t FUNC_7 (char*,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (char*) ;
 size_t FUNC_9 (char*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_10(size_t VAR_12, size_t VAR_13)
{
 char *VAR_14;
 size_t VAR_15, VAR_16, VAR_17;

 if (VAR_10) {
  VAR_5 = VAR_3;
  VAR_3 = VAR_4;
  VAR_2 = VAR_0;
  VAR_0 = VAR_1;
  VAR_8 = VAR_6;
  VAR_6 = VAR_7;
 }

 VAR_15 = 0;
 VAR_14 = (char *)FUNC_5(VAR_12, 0);
 FUNC_2((void *)VAR_14, "Unexpected mallocx() failure");

 for (VAR_16 = FUNC_7(VAR_14, 0); VAR_16 <= VAR_13;
     VAR_15 = VAR_16, VAR_16 = FUNC_7(VAR_14, 0)) {
  if (VAR_15 > 0) {
   FUNC_1(VAR_14[0], 'a',
       "Previously allocated byte %zu/%zu is corrupted",
       FUNC_0(0), VAR_15);
   FUNC_1(VAR_14[VAR_15-1], 'a',
       "Previously allocated byte %zu/%zu is corrupted",
       VAR_15-1, VAR_15);
  }

  for (VAR_17 = VAR_15; VAR_17 < VAR_16; VAR_17++) {
   if (VAR_9) {
    FUNC_1(VAR_14[VAR_17], 0xa5,
        "Newly allocated byte %zu/%zu isn't "
        "junk-filled", VAR_17, VAR_16);
   }
   VAR_14[VAR_17] = 'a';
  }

  if (FUNC_9(VAR_14, VAR_16+1, 0, 0) == VAR_16) {
   FUNC_8(VAR_14);
   VAR_14 = (char *)FUNC_6(VAR_14, VAR_16+1, 0);
   FUNC_2((void *)VAR_14,
       "Unexpected rallocx() failure");
   FUNC_3(!VAR_10 || VAR_11,
       "Expected region of size %zu to be junk-filled",
       VAR_16);
  }
 }

 FUNC_8(VAR_14);
 FUNC_4(VAR_14, 0);
 FUNC_3(!VAR_10 || VAR_11,
     "Expected region of size %zu to be junk-filled", VAR_16);

 if (VAR_10) {
  VAR_3 = VAR_5;
  VAR_0 = VAR_2;
  VAR_6 = VAR_8;
 }
}
