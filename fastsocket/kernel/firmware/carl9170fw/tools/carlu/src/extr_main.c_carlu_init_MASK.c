
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SDL_version {int patch; int minor; int major; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct SDL_version*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6()
{
 struct SDL_version VAR_2;
 int VAR_3;

 FUNC_2(&VAR_2);
 FUNC_3("=== SDL %d.%d.%d ===\n", VAR_2.major, VAR_2.minor, VAR_2.patch);

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 != 0) {
  FUNC_4("Unable to initialize SDL: (%s)\n", FUNC_0());
  return VAR_0;
 }

 return FUNC_5();
}
