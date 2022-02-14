
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

int FUNC_1(void)
{
    FUNC_0(((void*)0), "baz");
    FUNC_0("/foo/bar", "baz");
    FUNC_0("/foo/bar", "../baz");
    FUNC_0("/foo/bar", "/baz");
    FUNC_0("http://server/foo/", "baz");
    FUNC_0("http://server/foo/bar", "baz");
    FUNC_0("http://server/foo/", "../baz");
    FUNC_0("http://server/foo/bar/123", "../../baz");
    FUNC_0("http://server/foo/bar/123", "/baz");
    FUNC_0("http://server/foo/bar/123", "https://other/url");
    FUNC_0("http://server/foo/bar?param=value/with/slashes", "/baz");
    FUNC_0("http://server/foo/bar?param&otherparam", "?someparam");
    FUNC_0("http://server/foo/bar", "//other/url");
    return 0;
}
