
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct ccdigest_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ccdigest_info const*,int ) ;
 int FUNC_2 (struct ccdigest_info const*,int ) ;
 int FUNC_3 (struct ccdigest_info const*,int ,int *) ;
 int FUNC_4 (struct ccdigest_info const*,int ) ;
 int FUNC_5 (struct ccdigest_info const*,int ,int,int *) ;
 struct ccdigest_info VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (void*,int *,size_t) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static size_t
FUNC_8(void * VAR_3, size_t VAR_4)
{
 size_t VAR_5;
 uint64_t VAR_6;
 uint8_t VAR_7[VAR_0];
 const struct ccdigest_info * VAR_8 = &VAR_1;

 FUNC_2(VAR_8, VAR_2);
 FUNC_4(VAR_8, VAR_2);

 for (VAR_5 = 0; VAR_5 < 1023; VAR_5 += 1) {
  if (!FUNC_7(&VAR_6, 10)) {
   VAR_4 = 0;
   goto out;
  }
  FUNC_5(VAR_8, VAR_2, sizeof VAR_6, &VAR_6);
 }

 FUNC_3(VAR_8, VAR_2, VAR_7);

 if (VAR_4 > 2) {
  VAR_4 = 2;
 }

 FUNC_6(VAR_3, VAR_7, VAR_4 * sizeof(uint64_t));

out:
 FUNC_1(VAR_8, VAR_2);
 FUNC_0(VAR_7, sizeof VAR_7);
 FUNC_0(&VAR_6, sizeof VAR_6);

 return VAR_4;
}
